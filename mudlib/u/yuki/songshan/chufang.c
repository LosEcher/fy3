// Room: /u/yuki/songshan/chufang.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
    �������ķ�������һ�ֺòˣ�������ҲΪ����н�����ƽ������
��ʱ���������ķ��˾�ϲ���������Լ�����Щ�µĲ˷���
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"zoulang2",
  "north" : __DIR__"qingong",
]));

	setup();
	replace_program(ROOM);
}
