// Room: /d/kaifeng/daoxiang2.c

inherit ROOM;

void create()
{
	set("short", "����Ӷ�¥");
	set("long", @LONG
�ϴ�һ���������໥�����������ʮ���С�䡣����������С����
�Ų��������ߣ������������Ļ����������̵������ߵ�λ�á��ߺ�
�Ʊ߿�������ķ����־�������һ�֡�
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/gaoyanei.c" : 1,
  __DIR__"npc/luyuhou.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"daoxiang",
]));

	setup();
	replace_program(ROOM);
}
