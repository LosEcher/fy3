// Room: /d/yangzhou/nongtang
inherit ROOM;

void create ()
{
  set ("short", "СŪ��");
  set ("long", @LONG
����ͨ���ĳ���һ��СŪ��,�������򱱾��Ƕĳ��ˡ�
LONG);

  set("outdoors", "/d/yangzhou");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"nandaj1",
  "north" : __DIR__"duchang",
]));
  set("light_up", 1);

  setup();
}
int valid_leave(object me,string dir)
{
        if(dir=="north")me->set_temp("where_to","north");
        return ::valid_leave(me,dir);
}
