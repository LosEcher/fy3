//RJQTING.C

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���������Ĵ�������Ȼ��������֮�ˣ�����ȴ���õù�
ɫ���㣬�Գ����������ڲ�ͬ�������������һ�����ң���
���ĸ��̽���֡�������硱��һ�ٶ�ʮ��ǰ��������������
�ɹž���һ����ս����������������£����߰ˡ��ţ�������
������������ڣ�������Դ�Ϊ����֮�ס���������в輸��
���������ʹׯ�������������ڶ�һ�����
LONG
	);

	set("exits", ([
		"south" : __DIR__"rjqyuan",
	]));

//	set("outdoors", "mingjiao");
        set("objects",([
                       "/d/mingjiao/npc/zhuangzheng":1,
                       "/d/mingjiao/npc/menwei1":4,
			]));
	setup();
	replace_program(ROOM);
}
