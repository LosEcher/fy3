// Room: /d/suzhou/canhe/huanshi.c

inherit ROOM;

void create()
{
	set("short", "��ʩˮ��");
	set("long", @LONG
���С��¥���ں��ϣ�������ȥ�����̲��������۵ס����ڽ����жѷ��Ÿ�
ʽ������������ӡ���ݵ��У����Ǳ�������ʱ���µġ�������һЩ��ֵ�ͼ����
�ƺ�����ֻ��װ�Ρ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"miru3",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
