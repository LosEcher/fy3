// Room: /d/suzhou/meizhuang/heibaiziju.c

inherit ROOM;

void create()
{
	set("short", "�ڰ��Ӿ�");
	set("long", @LONG
ֻ���ô�һ�䷿�У�����һ��ʯ������ֻ����֮�⣬�յ�����һ����
�У�ʯ���Ͽ����ݺ�ʮ�ŵ���·���Է���һ�к��ӡ�һ�а��ӡ���������
���˼���֮�ⲻ��һ�������öԾ�ʱ���ġ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east":__DIR__"chuangongfang3",
]));
	set("objects",([
		__DIR__"npc/heibaizi":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
