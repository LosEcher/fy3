// Room: /d/kaifeng/longting.c

inherit ROOM;

void create()
{
	set("short", "��ͤ���");
	set("long", @LONG
��ͤ���ԭ���ǵ����й���������֮�󣬹����Ƿϣ������ڴ˵�
�����������䱦�ֳ£�����ֱ��������̾Ϊ��ֹ�����ϱ����
��֮��ɡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"road5",
  "west" : __DIR__"tinyuan",
]));

	setup();
	replace_program(ROOM);
}
