// Room: /d/huanggon/dating.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������,�����Ƿ��޴���ͻ���ɽͼ,��������ǳ½���,ͼ������
����ľ̫ʦ���Ӳ���,����ǽ����������������,�����˴��������˼���.
�������᷿.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  "/daemon/class/yunlong/xuanzhen.c" : 1,
  __DIR__"npc/wuliuqi.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"wyshanzhuang",
  "east" : __DIR__"xiangfang1",
  "north" : __DIR__"houtang1",
]));

	setup();
}

int valid_leave(object me,string dir)
{
	string bh;
	object npc;

	bh=(string)me->query("banghui");
	npc=present("xuan zhen",this_object());
	if(( !bh || bh!="��ػ�") && dir=="north"
	&& objectp(npc))
	return notify_fail("�������һ������ס������ܶ�����æ���ء�\n");
	return ::valid_leave(me,dir);
}

