// Room: /u/uuui/xuedao/xuedao0.c

inherit ROOM;

void create()
{
	set("short", "�յ�");
	set("long", @LONG
�����Ѿ���Ѫ���Ų�Զ�ˣ��ƺ�һ�ж���ƽ������
������о�����ô���ڡ�ʱ��ʱ��Ѫ���ŵĵ��Ӽ�����
�������Ͼ����κα��飬ż��������б����������һ
�ۣ�������û������ವġ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xuedao1",
  "west" : __DIR__"xuedao5",
]));

	setup();
	replace_program(ROOM);
}
