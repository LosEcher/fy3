// Room: /d/kaifeng/dadao2.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
һ��бб��С·������ȥ��Զ��Ƭ���֣�����ȥ�ں����ģ��ԴӲ�
��ǰ�����г���Ұ�����˺��������������ߡ�ֻ��̰ͼ·�����˻���
��������
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"yezhulin",
  "northeast" : __DIR__"dadao1",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
