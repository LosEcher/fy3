// Room: /d/suzhou/chengdongjie1.c

inherit ROOM;

void create()
{
	set("short", "�Ƕ���");
	set("long", @LONG
���ڶ��ֿ������ݸ������߰�ȫ����˱��ش�ָ�����Ǩ���˽֡����ߵ�
�ߴ�լԺ�ǹ�լ�����ϱ���ʵ�Ǹ��õط�����������½լ���Ҿ��䲻��˼ң���
Ҳ�����ݾ޸�֮һ���ֵ��������������ǳ��й㳡��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"chengzhong",
		"east" :__DIR__"chengdongjie2",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
