# EMUZ80-4004
4004 mezzanine board for EMUZ80

This document is written mostly in Japanese. If necessary, please use a translation service such as DeepL (I recommend this) or Google.

![](images/title.jpg)

## 概要
電脳伝説さん(@vintagechips)のEMUZ80( https://github.com/vintagechips/emuz80 )のZ80をIntel4004に差し替えるための基板(メザニンボード)，PIC用ファームウェア，4004用のデモプログラム(電卓)です．

別レポジトリにあるIntel4004評価ボード(test4004 https://github.com/ryomuk/test4004 )の4289とROMの機能をPIC上に実装したような作りになっています．
プログラムメモリ領域のRAMは実装しておらず，データ用メモリ(4002)も2つしか搭載していないので，test4004よりも小規模なシステムですが，とりあえずデモプログラムとして電卓が動作しています．

## このレポジトリの内容
- hardware/rev0.1 : メザニンボード作成用ファイル一式(KiCad 7用)
- src/PIC/emuz80_4004.X : PIC用ファームウェア(MPLAB IDE用のプロジェクトフォルダ)
- src/demo/calc : 電卓のデモプログラム(4004アセンブラ)

## 動画
Youtubeで関連動画を公開しています．
- https://www.youtube.com/@ryomukai/videos

## ブログ
関連する情報が書いてあるかも．
- [Intel 4004 関連記事の目次@ブログの練習](https://blog.goo.ne.jp/tk-80/e/3fa1e2972737c7b7d1b83f4e7bd648a2)

## 開発環境
- [The Macroassembler AS](http://john.ccac.rwth-aachen.de:8000/as/)
- [Microchip MPLAB IDE](https://www.microchip.com/en-us/tools-resources/develop/mplab-x-ide)

## 参考にした文献，サイト等 (敬称略, 順不同)
- vintagechips, [emuz80](https://github.com/vintagechips/emuz80)
- vintagechips, [EMUZ80が完成](https://vintagechips.wordpress.com/2022/03/05/emuz80_reference/)
- satoshiokue, [EMUZ80-6502](https://github.com/satoshiokue/EMUZ80-6502)． 他，各種メザニンボード
- Gazelle, [EMUZ80用ファームウェア](https://drive.google.com/drive/folders/1NaIIpzsUY3lptekcrJjwyvWTBNHIjUf1)
- kanpapa, [emu1802](https://github.com/kanpapa/emu1802)
- yyhayami, [emuz80_yyhayami](https://github.com/yyhayami/emuz80_yyhayami)

## 更新履歴
- 2023/5/23: 初版公開
