function powerset(arr) {
    let pset = []
    find(arr, arr.length, 0, [], pset);
    return pset;
}

function find(arr, n, i, curr, pset) {
    if (i === n) {
        pset.push(curr);
        return;
    }

    find(arr, n, i + 1, [...curr], pset)
    find(arr, n, i + 1, [...curr, arr[i]], pset)
}

console.log(powerset([1, 2, 3]));