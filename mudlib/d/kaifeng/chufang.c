// Room: /d/kaifeng/chufang.c

inherit ROOM;

void create()
{
	set("short", "��ի��");
	set("long", @LONG
���������еĴ�Сɮ���ò͵ĵط�����Ȼ���ɵ���ի��ר�������͹�
ȥ�ģ�ƽʱ����µ�ɮ�����ӳԷ��������ǳ����ˣ�Ҳ������ʣ�µ���
ի������˳ԡ���������ʮ��Ҳ������Щիϯ���ʩ�����߹ٸ�����
Ʒ����������ի����ɮ������æ�ġ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"chufang2",
  "west" : __DIR__"zhongyuan",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/liucaizhu.c" : 1,
  __DIR__"npc/kong.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
