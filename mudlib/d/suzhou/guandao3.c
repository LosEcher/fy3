// Room: /d/suzhou/guandao3.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
�������������������ݵĹٵ������ڴ˴�Զ���������·�����˽�ϡ��ż
��Ҳ����һ���������߷ɳ۶����������ǴҴҹ��͡���·���Գ��˻���֮��
��Ҳ������ʲô�ˡ����������ݷ��򣬶����������ݡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"guandao4",
  "eastup" : __DIR__"huangqiu3",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
