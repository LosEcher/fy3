// Room: /d/city2/road6.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������һ����������Ĵ�����ϡ��������������������ӵġ�
���̵ġ����Ŵ󳵵�����Ͼ��Ͽ��������������������ǳ����֡�
��ʱ����������������߷ɳ۶���������һ·��������·������
��������������֡�������ԶԶ�ľͿ������������ǡ�������ͨ��
���岿�䡣
LONG
	);
	set("outdoors", "city2");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"road7",
  "northwest" : __DIR__"road5",
]));

	setup();
	replace_program(ROOM);
}
