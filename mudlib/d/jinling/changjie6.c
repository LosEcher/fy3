// Room: /d/jinling/changjie6.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����Ǿ���ǵ���Ҫ�ֵ������ھ�����ϱ����������̣����Ծ��г�
��������������Ľֵ�����Ҳ�Ǿ����������ҵ�֡�ǰ����Ǿ����
�����ˣ�������һ���ںڵ�С��ͬ����ʱ����Ů������
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"hutong.c",
  "south" : __DIR__"changjie5.c",
  "north" : __DIR__"chengmen1.c",
]));

	setup();
	replace_program(ROOM);
}
