// Room: /d/kaifeng/eroad3.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������ǿ��⸮�ڶ���������Ҫͨ������·���˵��̸��ڲ��ϡ���
�����ƣ��۹�ģ�������ģ��ʽ���ģ����׷��ѵģ������ޱȡ��ϱ�
��Զ����ɽ�¸ʻ�ݡ������ǿ���������
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"eroad2",
  "west" : __DIR__"tieta",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
