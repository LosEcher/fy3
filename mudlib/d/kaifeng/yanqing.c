// Room: /d/kaifeng/yanqing.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����۷������������ư��硣ʼ����Ԫ̫������,ԭ��������,Ϊ��
�������ȫ��̴�ʼ�������ڴ˴��̲������ڴ˶��޽�.����������,
��������ۡ�  
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"sanqing",
  "east" : __DIR__"wroad2",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
