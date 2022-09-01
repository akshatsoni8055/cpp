let arr = [5,4,3,2,1];

function mergeSort(arr) {
    if (arr.length < 2) return arr;
    let mid = Math.floor((arr.length)/2)
    let left = mergeSort(arr.slice(0, mid))
    let right = mergeSort(arr.slice(mid, arr.length));
    return merge(left, right)
}

function merge (left, right) {

    let result = [];

    while(left.length && right.length) {
        if (left[0] < right[0]) result.push(left.shift())
        if (right[0] < left[0]) result.push(right.shift())
    }

    return [...result, ...left, ...right];

}

console.log(mergeSort(arr))