// Room: /d/huanggon/jiaoqiying.c

inherit ROOM;

void create()
{
	set("short", "����Ӫ");
	set("long", @LONG
����Ӫ�Ǿ�ʦ������֮һ,�����ᶽ������ʦ����������.Ӫ���ϴ�
һ�����,���˼���ƥ����,����Ӫ��ͳ������������,���û�������.��
�������������Ķ����.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/chaerzhu.c" : 1,
  __DIR__"npc/xiaoqiying.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"edajie",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
