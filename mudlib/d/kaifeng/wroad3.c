// Room: /d/kaifeng/wroad3.c

inherit ROOM;

void create()
{
	set("short", "����� ");
	set("long", @LONG
���⸮���������Ҫ��ͨҪ�����ֵ����ߵ������������˳�������
�̷���ߺ�ȣ�������С�����ּۻ��ۣ������ޱȡ��ϱ߲�Զ��������ۡ�
��������ͤ԰��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"wroad2",
  "east" : __DIR__"tinyuan",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
