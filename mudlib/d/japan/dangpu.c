// Room: /d/japan/dangpu.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
��Ҫ���,�ձ�����е�����.��Ȼ,���еİ����е㲻ͬ,����࿴
����ֵǮ�ĹŶ�������������.�ϰ�һ��Ҫ��ϸ����֮��Ż��Ӹ��㼸��
СǮ.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"jiedaoe1",
]));
        set("guarded", ([ /* sizeof() == 1 */
               "north" : ({ }),
          ]));
        set("objects", ([ /* sizeof() == 2 */
               __DIR__"npc/zuozuomu" : 1,
            ]));

	setup();
	replace_program(ROOM);
}
