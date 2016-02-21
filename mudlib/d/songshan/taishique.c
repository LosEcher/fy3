// Room: /d/songshan/taishique.c
// Date: CSWORD 96/03/25

inherit ROOM;

void create ()
{
  set ("short", "̫����");
  set ("long", @LONG
��ɽ�ųƷ��⣬�ֳƳ�ɽ��Ϊ�����е���������̫�����Ҷ�ɽ��
����ɡ������ʱ�� "�Ը�" ��ȡ��ʫ�� "����ά�ߣ���������" ��
������֮Ϊ����С���졣�׸����࣬����� "����̫������" ���֣�
׭�Ĺ��ӣ��Ծ���������������ȥ����ɽ�����µ�·����һ�����
���������ˡ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yao" : 1,
]));
  set("outdoors", "songshan");
  set("exits", ([ /* sizeof() == 1 */
  "south":"/d/kaifeng/shanlu2",
  "north" : __DIR__"tianzhongge",
]));

  setup();
}

int valid_leave(object me,string dir)
{
	string family;
	object ob;

	family=(string)me->query("family/family_name");
	ob=present("yao hou",this_object());
	if(family &&family!="��ɽ��"&& (int)me->query("combat_exp")>=10000
	&& objectp(ob) && dir=="north")
	return notify_fail("�ֺ�ȵ�����ɽ���أ������˵Ȳ������ڣ�\n");
	return ::valid_leave(me,dir);
}

