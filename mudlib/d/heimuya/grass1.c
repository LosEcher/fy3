inherit ROOM;
 
void create()
{
        set("short", "�ݵ�");
        set("long",@LONG
������һƬ���Ĳݵ���,����¶���ڲ�Ҷ��Ե����,�ϱߵĴ�������
���½̷�����,�������ɴ�ؼ�,�Ǹ߹���ĹȺ,������Ƭ�ݵ�.
LONG );
        set("exits", ([
            "east"    : __DIR__"mudi",
            "south"    : __DIR__"fen0", 
            "north"    :__DIR__"grass2",
        ]));
        set("no_clean_up", 0);
        set("outdoors", "inn");    
        setup();
	replace_program(ROOM);
}
