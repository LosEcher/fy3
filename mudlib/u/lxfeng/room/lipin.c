//Room: lipin.c

inherit ROOM;

void create ()
{
        set ("short", "��Ʒ��");
        set ("long", @LONG
��ǧ��������ķ��䡣
LONG);
        set("exits", ([ /* sizeof() == 1 */
        "out" : "/d/zhongzhou/yinghaoup",
        ]));
        set("objects", ([ /* sizeof() == 1 */
        "/u/lxfeng/npc/shizhe" : 1,
       ]));
        set("no_fight", 1);
        set("no_magic", 1);


        setup();
}
