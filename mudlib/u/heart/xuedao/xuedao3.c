// Room: /u/uuui/xuedao/xuedao3.c

inherit ROOM;

void create()
{
	set("short", "�յ�");
	set("long", @LONG
�������Ｘ���㿴����ʲô���ˡ���˵�ǿյأ���
����ĺܡ��������а߰�Ѫ��������Щ�ƾɵ��·�����
Ȼ������������������ɽ�¡��������ͨ����ħ����·
����ż���м�ֻͺ�շɹ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xuedao4",
  "east" : __DIR__"xuedao2",
]));

	setup();
	replace_program(ROOM);
}
