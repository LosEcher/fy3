// Room: /d/shaolin/donglang2.c
// By Marz 04/01/96 

inherit ROOM;

void create()
{
    set("short", "ʮ����̨");
    set("long", @LONG
������һ������ʯ���ϣ��ϱ���һ���߸ߵ���¥�������������Ǻÿ���
�����������ţ��������Ͻ�ǣ�����һ��·�������ģ���֪������ȥ��
LONG
    );

    set("exits", ([
	"north" : __DIR__"zijincheng",
	"south" : __DIR__"santian",
    ]));
}
