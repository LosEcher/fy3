// Room: /d/suzhou/guandao2.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
�������������������ݵĹٵ������ڴ˴�Զ���������·�����˽�ϡ��ż
��Ҳ����һ���������߷ɳ۶����������ǴҴҹ��͡���·���Գ��˻���֮��
��Ҳ������ʲô�ˡ����������ݷ��������������ݡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"westup" :__DIR__"huangqiu1",
  "northeast" : __DIR__"guandao1",
]));
	set("objects",([
		"/npc/man4":1,
	]));
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
