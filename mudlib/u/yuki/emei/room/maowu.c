// Room: /u/yuki/emei/maocaowu.c

inherit ROOM;

void create()
{
        set("short", "é����");
        set("long", @LONG
�������浹����ʰ�ĺܸɾ�������ܼ򵥣�����һ��
ľ��������ľ�Σ���ǽ�ǵ�һ��С�񴲡�����Ψһ��װ�ξ�
�Ǵ��ߵ�һ��С���������������еĲ軨ȴ��ӭ��΢��ҡ��
�ţ���Ȼ�Ǹո�ժ�����ġ�
LONG
        );
        set("item_desc", ([ /* sizeof() == 2 */
        "hualan" : "һ������Ƭ��ɵľ��µ�С��������Ƭ�Ѿ���Ħ����ʮ�ֹ⻬�����в��ż���軨��",
]));
        set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"banshanyao",
]));
        set("no_clean_up", 0);
        set("objects", ([ /* sizeof() == 1 */
  "/u/yuki/emei/room/npc/chahuanv" : 1,
]));

        setup();
//      replace_program(ROOM);
}

void init()
{
        add_action("do_get","get");
}

int do_get(string arg)
{
        object me,ob;
        me=this_player();
        ob=this_object();
        if(arg!="chahua") return 0; 
        message_vision("$N����Ĵ��������ó���һ��軨��\n", me);
        ob = new("/u/yuki/emei/room/obj/chahua");
        ob->move(me);
        return 1;
}



