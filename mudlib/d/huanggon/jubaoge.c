// Room: /d/huanggon/jubaoge.c

inherit ROOM;

void create()
{
	set("short", "�۱���");
	set("long", @LONG
�۱���ĺ�̨�ϰ��˵�ǹ�����������̫��.����Ϣ��֪���,����
���е�̫�ྭ����˴˵�,���еĲ��������а��Ÿ����鱦����,���ι�
��.ӳ�ŵƹ�,ֱ�ε����ۻ�.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/longweifeng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wangfujing2",
]));

	setup();
	replace_program(ROOM);
}
