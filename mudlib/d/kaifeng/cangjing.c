// Room: /d/kaifeng/cangjing.c

inherit ROOM;

void create()
{
	set("short", "�ؾ�¥");
	set("long", @LONG
�ؾ�¥��һ������С¥����¥�ж��Ƿ�Ҿ��䣬����ϡ�ٵĶ���
̴ľ��ʢ���ˡ��ղ���¥�ϣ�����ר��ְ˾�������ۿ�ȥ��������
�ߵ͵���ܣ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhifa.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"houyuan",
  "up" : __DIR__"cangjing2",
  "east" : __DIR__"xiaoyuan",
]));

	setup();
	replace_program(ROOM);
}
