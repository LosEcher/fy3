//by enter xiaoya

inherit ROOM;

void create()
{
        set("short", "�鱦��");
        set("long", @LONG
������߰���������̨ǰһλ������һյ�͵��·���
������������л���硣
LONG
        );

        set("exits", ([
                "east" : __DIR__"zhubaodian",                
        ]));
        set("objects",([
                __DIR__"npc/xie" : 1,
        ]));
             
               
        setup();
        replace_program(ROOM);
}

 
