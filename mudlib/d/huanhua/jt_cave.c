// Room: /d/new/huanhua/jt_cave.c

inherit ROOM;

void create()
{
	set("short", "���춴ǰ");
	set("long", @LONG
���춴��佻����������ݼ�֮��.���湩�������������������λ.
����,��˵佻����ҵ���ɽ֮��---[���轣],�Ͳ��ڴ˶���.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guanbo.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"changlang3",
  "enter" : __DIR__"injt_cave",
]));
	set("no_clean_up", 1);

	setup();
}
int valid_leave(object me,string dir)
{
   if (objectp(present("guang bo",this_object()))&&dir=="enter")
      {
         if (me->query("family/family_name")!="佻�����")
              return notify_fail("�㲮ѽѽ���Ŷ���ҡ��ҡ��,�����ǲ������ȥ!\n");
       }
return ::valid_leave(me,dir);
}           
