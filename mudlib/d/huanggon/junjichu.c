// Room: /d/huanggon/junjichu.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
��������ר�Ŵ����������ĵط�,�����ʸ�����������,����Ⱦ�
�˴������������֮��,���ϳ�,�ʵ���ʲô��,Ҳ��������������.ֻ��
���ж����������,�ط�������.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/suoetu.c" : 1,
  __DIR__"npc/mingzhu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"zhonghedian",
]));

	setup();
	replace_program(ROOM);
}
