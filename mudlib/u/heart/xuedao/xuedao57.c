// Room: /u/uuui/xuedao/xuedao57.c

inherit ROOM;

void create()
{
	set("short", "�������");
	set("long", @LONG
 ���Ⱥ�ɫ�ĺ��صĴ��ų����ţ�������һƬ�յء�
 ���ŵ���ɫ�������ܴ��ۣ�����ɺ��˵�Ѫ��������ϣ
 �����Լ��Ĵ����
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/2");
	set("exits", ([ /* sizeof() == 2 */
  "gate" : __DIR__"xuedao58",
  "east" : __DIR__"xuedao53",
]));

	setup();
	replace_program(ROOM);
}
