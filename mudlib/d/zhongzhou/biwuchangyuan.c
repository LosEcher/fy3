

inherit ROOM;

void create()
{
        set("short", "���䳡��Ժ");
        set("long", @LONG
���� д�����淳�� @_@
LONG
        );
set("outdoors","/d/zhongzhou");
set("no_fight",1);

        set("exits", ([
                 "south" : __DIR__"biwuchangmen.c",
                 "up" : __DIR__"biwuchang.c",
]));
          set("objects", ([
                   __DIR__"npc/guard.c" : 2,

        ]));

        setup();
}
int valid_leave(object who,string dir)
{
        object npc;
        npc=present("guard man",this_object());
         if(dir=="up" && !(int)who->query_temp("war_money") && objectp(npc)) {
        return notify_fail("������Ц����û�����Ӿ����ȥ��������\n");
             }
        if(who->query_temp("war_money"))
             who->delete_temp("war_money");
        return ::valid_leave(who,dir);
}


