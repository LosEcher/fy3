// Room: /d/kaifeng/fangzhang.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�����������˵�Ƚϼ򵥣����е�ǽ�����Ǹ����ġ����֡���
������һ�Ŵ�ϯ�ӣ�һ�Ű����ͷ���ϯ���м䡣�������������档��
������ĵط����и����ţ������Ǹ�Сľ�㣬��˵���ɴ�ʦ��Ϊ����
ÿ��ֻ�����Ƭ�̾;������档
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xiaoyuan",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhiqing.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
