// Room: /d/japan/qianzhuang.c

inherit ROOM;

void create()
{
	set("short", "Ǯׯ");
	set("long", @LONG
Ǯׯ���ϰ��Ǹ�ͺ���Դ��ļһ�,���ڷŸ�����������,���ǮҪ�Ǵ�
������Ǯׯ,����Ҫ�ձ��ܷ��õ�.���������ڸ���������ϵ.����ʵ��ͨ��
ͨ��,��ȻҪ��һ��������.
LONG
	);
        set("guarded", ([ /* sizeof() == 1 */
  "north" : ({ }),
]));
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"jiedaos",
]));
        set("objects", ([ /* sizeof() == 1 */
               __DIR__"npc/xiaye" : 1,
            ]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
