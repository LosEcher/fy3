// Room: /d/kaifeng/wroad.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
���⸮���������Ҫ��ͨҪ�����ֵ����ߵ������������˳�������
С�̷������ŵ�������ߺ�ȡ��˵��򶫾��Ǵ�����µķ����أ�����
����ȥ��Զ�����ܼ�������۵Ĵ����ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wroad1",
  "eastup" : __DIR__"fangsheng",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
