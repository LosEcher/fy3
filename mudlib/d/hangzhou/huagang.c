// Room: /d/hangzhou/huagang.c

inherit ROOM;

void create()
{
	set("short", "���۹���");
	set("long", @LONG
����һ�������ˮ��,�ܱ���̫��ʯװ��,������ǧ����������
����,һ��СϪ���ӳص�һ������,�ִ���һ������԰��,����ǻ���
��.���ܷ�����׺,ǧ�˰�̬��Ѥ�����ˣ�������Ȥ�� 
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mameipo.c" : 1,
]));
	set("outdoors", "/d/hangzhou");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wuyuan.c",
  "south" : __DIR__"xiaolu.c",
]));

	setup();
	replace_program(ROOM);
}
