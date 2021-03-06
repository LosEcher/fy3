// Room: /u/uuui/damen.c

inherit ROOM;

void create()
{
        set("short", "凝王府");
        set("long", @LONG
凝王府光看大门就会令人仰视。排楼下面设的门就不
同一般。门墙全部又厚又高显出非凡气势，排楼金彩描绘
朱红大门上一排排金钉在阳光下，闪闪发光。汉白玉的石
狮蹲守在大门两侧。威严雄伟中露出皇家的气派。两边侧
门与正门样式一样，只是略小一些。大门只有在政务大典
或家庭大礼时才会开启。平时王府出入全走右边门。该门
平时由四个侍卫一班的轮流把守。一般情况下三个门全都
关的紧紧的。令人无法窥视到府中的情况。
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yingbi",
]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}

