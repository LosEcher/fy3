// Room: /d/huanggon/shufang.c

inherit ROOM;

void create()
{
	set("short", "�鷿");
	set("long", @LONG
�������������鷿,Ҳ�ǿ������ճ�������۵ĵط�,���ϵĴ�����
�϶���Щ����,һ�Ź�����Ӱ����Ӹ�������,��ǽ�ڵĶ���Щ��ͷ��
�鼮,����ȥ��û�з����ĺۼ�.
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"kangneiting",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
