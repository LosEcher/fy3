// Room: /d/robber/hill.c

inherit ROOM;

void create()
{
	set("short", "С����");
	set("long", @LONG
�Ը���ƽ�ص�һ��С����,�������Ӳ�,�ݴ���ɢ����һЩ�Ʊ�ֽ,��Զ
�����ϵ�һֻ��ѻ[�¸�]�ؽ�����,����ͷ����һ����Ӱ.������һ����
��С·.
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/jiangnan");
	set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"mudroad1",
  "north" : __DIR__"tomb",
]));

	setup();
	replace_program(ROOM);
}
