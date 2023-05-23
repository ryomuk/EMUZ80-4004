#!/usr/bin/perl
use strict;
use warnings;

my $file = $ARGV[0];
open my $fh, "<", $file or die $!;
binmode($fh);

my $buf;
my $data;
my $romsize = 0x1000;

print "const byte rom[ROM_SIZE]  __at(0x10000) = {\n";

for(my $addr = 0; $addr < $romsize; $addr++){
    if($addr % 8 == 0){
	printf "  "
    }
    if(sysread($fh, $buf, 1)){
	$data = unpack("C", $buf);
    } else {
	$data = 0;
    }
    printf("0x%02X%s", $data, ($addr == $romsize-1) ? " ": ",");

    if($addr % 8 == 7){
	printf(" // %03X-%03X\n", $addr-7, $addr);
    }
}
print "};\n";

close $fh;
