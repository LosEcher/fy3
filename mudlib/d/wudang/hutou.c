// tyroad7.c ���ɽ·
// by Marz

inherit ROOM;

void create()
{
        set("short", "��ͷ��");
        set("long", @LONG
        �����ڻ�ͷ��ɽ·�ϣ�һ�����ͱڣ�һ�������¡��߸ߵ�������������
�����У���Լ�ɼ����������ԵĽ���ͺ����˶���ϸ������Լ��Ľ��£�����̧
ͷ��һ�ۣ�Ω��һ��С��ˤ��ȥ������ǿ�˳û���٣������޲�����������ֻ��
����·��
LONG
        );
        set("outdoors", "wudang");

        set("exits", ([
                "north" : __DIR__"chaotian",
                "southdown" : __DIR__"wulao",
                "west":__DIR__"maofang",
        ]));
}

