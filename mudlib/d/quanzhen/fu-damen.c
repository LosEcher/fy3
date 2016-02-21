// Room: /d/quanzhen/fu-damen.c

inherit ROOM;

void create()
{
	set("short", "��");
	set("long", @LONG
	�����ǳ��������׸�--��Ա��ҵĴ��ţ����Ϲ���һ�����ң�
����д�š�����������֡���������һ������Ӱ�ڣ�ģģ��������
����һЩʫ��֮��Ķ�����������ü���۵ļҶ���ͦ��͹�ǵ�վ���ſ�
ҫ����������������һ��Ϊ�����ʵ������аԡ�
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jiading" : 3,
]));
	set("outdoors", "/d/quanzhen");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"fu-xiaoyuan",
  "north" : __DIR__"dongjie",
]));

	setup();
	replace_program(ROOM);
}
