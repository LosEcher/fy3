// Room: /d/huanggon/dawu.c

inherit ROOM;

void create()
{
	set("short", "���󸻾Ӵ�");
	set("long", @LONG
����һ���,��������ϡ��,ֻһ������,һ������,���Ϸ��Ų��
���롣ǽ���ϰ�������ͭ��̨��������һ����������һ���Ű�����,��
Ȼ������,���洫��һЩ����.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ruidong.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"neishi",
  "north" : __DIR__"yuhuayuan",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
