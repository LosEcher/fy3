// Room: /d/jinling/shanglin.c

inherit ROOM;

void create()
{
	set("short", "����Է");
	set("long", @LONG
�����������������Է�ˡ�����Է��һ����Ȼ԰�֣������˹�������
��һ�ֶ��صķ�񡣶���������������Է������¥��ס��һ����ɫ���ˣ��ų�
����ҡ����㷼��;ʹ�úܶ�����ɧ�ͣ���ٹ��˾���ǰ���ݷá�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"xiaolu.c",
  "southeast" : __DIR__"chalu.c",
]));

	setup();
	replace_program(ROOM);
}
