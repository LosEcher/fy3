// Room: /d/chengdu/midao.c

inherit ROOM;

void create()
{
	set("short", "ɽ����");
	set("long", @LONG
����һ�������ɽ�����Ĵ����������ģ��㼱�ÿ������
��������(wall)�����ǻ��������̦������ֵ��������и���
��(string)������ϵ��һ����ʯͷ(stone)��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "out" : "/d/jinshe/yongdao1",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
