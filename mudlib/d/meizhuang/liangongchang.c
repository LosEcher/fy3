// Room: /d/suzhou/meizhuang/liangongchang.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�ô��һ���㳡��������÷�����������϶��ǵ������㡣�����̵���
ʯ��ӿ����ݣ����в��ٽ�ӡ������ײ����ĺۼ�������÷ׯ����ɢ�ڸ�
������ͷ������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"shibanlu3",
]));
	set("objects",([
		__DIR__"npc/nandizi"+(random(4)+1):1,
		__DIR__"npc/nandizi"+(random(4)+1):1,
		__DIR__"npc/nudizi"+(random(4)+1):1,
		 __DIR__"npc/nudizi"+(random(4)+1):1,
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
