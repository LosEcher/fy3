// Room: /d/suzhou/dacunlou1.c

inherit ROOM;

void create()
{
	set("short", "��¥");
	set("long", @LONG
һ��Ũ�ҵ���ζ�˱Ƕ������㲻��������ü�����������Ⱥ�ĵ�̺��ǽ����
���ŵĴ��御��ЩͶ���ͱ������쳣����Ůͼ��ӭ���¥�ݿ��ϵ��ĸ�������
���Ʈ�������顰��ɫ���á�����ʱ��������������Ц���㲻�������ࡣ  
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"taijiannong2",
]));
	set("objects",([
		__DIR__"npc/laobao":1,
	]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
