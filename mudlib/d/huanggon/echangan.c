// Room: /d/huanggon/echangan.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
�����ֶ�������,�Ǿ�ʦ����֮��,��������,�̷�,�ο�,����������
��,�ֵ��ı�������С��ͬ,������ˮ����ͬ,�����⼸�쾭�������д���
���������˳���.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"zhaomuchu",
  "west" : __DIR__"wangfujing1",
  "east" : __DIR__"echangan1",
  "north" : __DIR__"tianwell",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
