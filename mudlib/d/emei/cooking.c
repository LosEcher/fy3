// Room: /d/emei/cooking.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������ò͵ĵط������Ͼò�ʳ�˼��̻�,����Ķ�����Ҫ��Ϊ����
��׼���ģ�һ��ʯ���ϰ������ӡ���ͷ�����ӡ��ƾ�֮���ʳ���Ҫ
�Ƕ��ˣ������Լ����ųԡ��ݽǰ��ſڴ�ˮ�ף�����Դ���Ҩˮ����.
LONG
	);
	set("objects", ([ /* sizeof() == 5 */
  __DIR__"npc/wenqing.c" : 1,
  __DIR__"obj/huang.c" : 2,
  __DIR__"obj/pot.c" : 1,
  __DIR__"obj/baozi.c" : 3,
  __DIR__"obj/taozi.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"qiandong",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
