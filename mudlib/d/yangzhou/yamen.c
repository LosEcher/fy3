// Room: /u/swordman/yangzhou/yamen
inherit ROOM;

void create ()
{
  set ("short", "���ݸ���");
  set ("long", @LONG
����������ݸ��ã����ſ���һ�������ʯʨ�����ɫ�Ĵ��Ž���
�ţ�ֻ���ſ���������һ���������׻�˵���������ų�Ǯ�����������
������������Ǯׯ�ˡ�
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xijie1",
  "south" : __DIR__"zhifutang",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bingyong" : 2,
]));

  setup();
}
int valid_leave(object me, string dir)
{       if (dir == "south") {
        if (objectp(present("bingyong", environment(me)))) {
         if ( me->query_skill("literate",1) < 60 )
return notify_fail("������ס��˵��֪������������������Ұ��\n");
                }
        return ::valid_leave(me, dir);
        }
        return 1;
}

